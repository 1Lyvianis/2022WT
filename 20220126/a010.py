#!/usr/bin/env python
# coding: utf-8

# In[4]:


a = int(input())
index = 2
flag = 0
while(a!=1):
    cnt = 0
    while(a % index == 0):
        cnt+=1
        a/=index
    if(flag==1):#not first input
        if(cnt==1):
            print(" * %d"%index,end = '')
        elif(cnt>1):
            print(" * %d^%d"%(index ,cnt),end = '')
    else:#first input
        if(cnt==1):
            print("%d"%index,end = '')
            flag = 1
        elif(cnt>1):
            print("%d^%d"%(index ,cnt),end = '')  
            flag = 1
    index+=1


# In[ ]:




