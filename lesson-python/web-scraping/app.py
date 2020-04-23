from bs4 import BeautifulSoup
import requests

url = 'https://jadwalsholat.pkpu.or.id/'
content = requests.get(url)
isi = BeautifulSoup(content.text,'html.parser')
data = isi.find_all("tr","table_highlight")
for i in data:
    print(i.get_text())
