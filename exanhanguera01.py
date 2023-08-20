c = 200  # valor da constante

mes = input("Digite o mês que deseja saber o resultado: ")  # Função para capturar o mês que o cliente digitar
mes = int(mes)  # Não esqueça de converter para numérico


resp = c * mes  # equação do primeiro grau

print("A quantidade de peças para o mês {} será {}".format(mes, resp))  # impressão do resultado - MELHOR PRÁTICA DE USO

print(f"A quantidade de peças para o mês {mes} será {resp}")  # impressão do resultado

print("A quantidade de peças para o mês %s " % mes)  # impressão do resultado
