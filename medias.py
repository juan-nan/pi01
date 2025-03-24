def media(x,y,z):
    return x*0.3+y*0.3+z*0.4

n1 = float(input("Digite a primeira nota:"))
n2 = float(input("Digite a segunda nota:"))
n3 = float(input("Digite a terceira nota:"))

resultado = media(n1,n2,n3)

print(f"Média ponderada = {resultado:.2f}")