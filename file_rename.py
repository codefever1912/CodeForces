import os
import requests

def rename_files(directory):
    url = "https://codeforces.com/api/problemset.problems"
    response = requests.get(url)

    if(response.status_code != 200):
        print("could not fetch CodeForces API")
        return
    
    data = response.json()
    if data["status"] != "OK":
        print("there was a problem with retrieving the info, please try again")
    else:
        data = data["result"]["problems"]
        problem_map = {
            f"{str(p["contestId"]) + p["index"]}" : f"{p["name"]}" for p in data
        }

        for file in os.listdir(directory):
            if file.endswith(('.cpp', '.bin', '.exe')):
                parts = file.split  ('.')
                file_name = parts[0]
                extension = parts[1]
                
                if file_name not in problem_map.keys():
                    print(f"Skipping {file} cuz data for this file could not be retrieved from API")
                    continue 

                new_file_name = file_name + problem_map[file_name]
                sanitized_name = new_file_name.replace(' ', '_').replace('/', '_').replace(":", '_')

                old_path = os.path.join(directory, file)
                new_path = os.path.join(directory, f"{sanitized_name}.{extension}")

                if os.path.exists(new_path):
                    print(f"Resultant new file already exists, hence skipping renaming {file}")
                
                try:
                    os.rename(old_path, new_path)
                    print(f"Renamed {file} from {old_path} -> {new_path}")
                except OSError as e:
                    print(f"Error in renaming {file} : {e}")

if __name__ == "__main__":
    directory = './'
    rename_files(directory)