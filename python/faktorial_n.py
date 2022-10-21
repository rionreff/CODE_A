"""

5! = 5 x 4 x 3 x 2 x 1 = 120

"""

bilangan = input("Bilangan : ")
bilangan = int(bilangan)
faktorial = 1

print(f"{bilangan}! = ", end="")

for x in range(bilangan, 0, -1):
    faktorial *= x

    print(f"{x}", end="")
    
    if x != 1:
        print(" x ", end="")
    else:
        print(" = ", end="")

print(faktorial)
