---
layout: post
current: post
cover: assets/built/images/background-markdown.jpg
navigation: True
title: Markdown 기본 정리
date: 2022-02-27 16:40:00 +0900
tags: [markdown]
class: post-template
subclass: 'post tag-markdown'
author: KRdevkong
---

{% include makrdown-table-of-contents.html %}

# 마크다운 문법 정리  


## 헤더 (Header)



```
# 헤더크기 (h1)
## 헤더크기 (h2)
### 헤더크기 (h3)
#### 헤더크기 (h4)
##### 헤더크기 (h5)
###### 헤더크기 (h6)
```

# 헤더크기 (h1)
## 헤더크기 (h2)
### 헤더크기 (h3)
#### 헤더크기 (h4)
##### 헤더크기 (h5)
###### 헤더크기 (h6)



***


## 목록 (List)



<pre>
Unordered
* Item 1
* Item 2
    * Item 2a
    * Item 2b

Ordred
1. Item 1
2. Item 2
3. Item 3
   1. Item 3a
   2. Item 3b
</pre>    
Unordered
* Item 1
* Item 2
    * Item 2a
    * Item 2b

Ordred
1. Item 1
2. Item 2
3. Item 3
   1. Item 3a
   2. Item 3b



***

## 가로줄



```
***
```



***



## 텍스트 강조



```
**굵게**

*기울임*

***굵은 기울임***

~~취소선~~
```



**굵게**

*기울임*

***굵은 기울임***

~~취소선~~



***


## 인용



```
> 인용문 1
>> 인용문 2
```



> 인용문 1
>> 인용문 2



***



## 소스 코드



<pre>
텍스트 사이에 넣는 `소스코드` 는 이렇게

'''
소스코드를 여러줄 작성하려면
이렇게
'''
</pre>
텍스트 사이에 넣는 `소스코드` 는 이렇게
```
소스코드를 여러줄 작성하려면
이렇게
```



***



## 링크



```

1. <링크주소>
2. [링크텍스트](링크주소)
3. [링크텍스트](링크주소,"부가설명")
```
1. <링크주소>
2. [링크텍스트](링크주소)
3. [링크텍스트](링크주소,"부가설명")



***



## 이미지



```
![대체 텍스트](이미지파일 경로)
```
![우주고양이 사진](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQnxjL_J7KhNPla6YCFGyISn5Qbbug7nTFhUA&usqp=CAU)


***



## 테이블



```
First Header | Second Header
-------------|---------------
Contents cell 1 | Contents cell 2
Contents column 1 | Contents column 2
```
First Header | Second Header
-------------|---------------
Contents cell 1 | Contents cell 2
Contents column 1 | Contents column 2



***



## 체크박스



```
- [x] 체크 O
- [ ] 체크 X
```
- [x] 체크 O
- [ ] 체크 X



