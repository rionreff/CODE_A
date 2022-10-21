"""

    *
   **
  ***
 ****
*****

"""
tinggi = 5

for baris in range(tinggi):
    for kolom in range(tinggi-baris-1):
        print(" ", end="")
    for kolom in range(baris+1):
        print("*", end="")
    print("")
