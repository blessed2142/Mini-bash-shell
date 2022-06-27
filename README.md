# minishell
Bash с ограниченным функционалом. 
## Что нужно было сделать:
1) История введеных команд.
2) Поиск и запуск нужно бинарника (ls, clear, cp etc.).
3) Незакрытые кавычки не обрабатываются, приведет к syntax error.
4) &&, ; не обрабатываются, рассматриваются как обычные символы.
5) Редиректы (>, >>, <<, <).
6) Пайпы (|). 
7) Переменные окружения ($PATH, $SHLVL etc.).
8) Реализовать built-ins:
  ◦ echo with option -n
  ◦ cd with only a relative or absolute path ◦ pwd with no options
  ◦ export with no options
  ◦ unset with no options
  ◦ env with no options or arguments
  ◦ exit with no options
## Usage:
make && ./minishell (должна быть установлена библиотека readline, путь к которой указать в Makefile на 72 строке)
