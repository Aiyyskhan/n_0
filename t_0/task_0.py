def str_converter(s: str) -> str:
	res = ""
	for c in s.lower():
		res += ')' if s.count(c) > 1 else '('
	return res

while True:
	cmd = input("Введите строку или 'stop' чтобы выйти: ")
	if cmd == "stop":
		print("Bye-Bye!")
		break
	print(str_converter(cmd))