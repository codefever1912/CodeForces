import os
import requests
from bs4 import BeautifulSoup

def rename_files(directory):
    url = "https://codeforces.com/api/problemset.problems"
    response = requests.get(url)

    if(response.status_code != 200):
        print("could not fetch CodeForces API")
        return
    
    data = response.json()
    if data.status != "OK":
        print("there was a problem with retrieving the info, please try again")
    else:
        data = data["result"]["problems"]
        problem_map = {
            f"{str(p["contestID"]) + p["index"]}" : f"{p["name"]}" for p in data
        }


        for file in os.listdir(directory):
            if file.endswith(('.cpp', '.bin', '.exe')):
                parts = file.split('.')
                file_name = parts[0]
                