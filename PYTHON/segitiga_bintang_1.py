"""
Output :
*
**
***
****
*****
"""

tinggi = 5

for baris in range(tinggi):
    for kolom in range(baris+1):
        print("*", end="")
    print("")
