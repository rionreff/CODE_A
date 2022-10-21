"""

*****
 ****
  ***
   **
    *

"""
tinggi = 5

for baris in range(tinggi):
    for kolom in range(baris):
        print(" ", end="")
    for kolom in range(tinggi-baris):
        print("*", end="")
    print("")
