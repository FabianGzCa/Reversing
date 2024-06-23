texto_original = b"G{zawR}wUz}r.222"
print(texto_original)
llave_xor = 19

# Aplicar XOR a cada byte del texto original con la llave
texto_cifrado = bytes([byte ^ llave_xor for byte in texto_original])

print("Texto original:", texto_original)
print("Texto cifrado:", texto_cifrado)

prueba = b"G"

texto = chr(prueba[0] ^ 19)
print(texto)
