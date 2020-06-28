
#import ssl

#抓取PTT電影版的網頁原始碼 HTML
import urllib.request as req
url="https://tieba.baidu.com/f?kw=%E9%87%91%E7%94%B0%E4%B8%80&ie=utf-8&tab=good"
#建立一個Request物件，附加 Request Headers 的資訊
request=req.Request(url, headers={
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/75.0.3770.142 Safari/537.36"
}) 
with req.urlopen(request) as response:
    data=response.read().decode("utf-8")

#解析原始碼，取得每篇文章的標題
import bs4
root=bs4.BeautifulSoup(data, "html.parser") #讓BeautifulSoup協助我們解析HTML格式文件
titles=root.find_all("div", class_="title") #尋找 class="title" 的div標籤
#for title in titles:
    #if title.a != None: #如果標題包含a標籤(沒有被刪除),印出來
print(titles.a.string)