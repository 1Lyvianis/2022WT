#!/usr/bin/env python
# coding: utf-8

# In[15]:


lst = input().split(" ")
if(lst[1] == '+'):
    print(int(lst[0])+int(lst[2]))
if(lst[1] == '-'):
    print(int(lst[0])-int(lst[2]))
if(lst[1] == '*'):
    print(int(lst[0])*int(lst[2]))
if(lst[1] == '/'):
    print(int(lst[0])//int(lst[2]))


# In[ ]:




