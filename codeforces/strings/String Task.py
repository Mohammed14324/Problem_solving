name=input("")
liste=[]
for char in name :
  if not char.upper() in "UYEAIO":
    liste.append(char)
for char in liste :
  print(f".{char.lower()}" , end="")