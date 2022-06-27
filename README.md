# minishell (feat. sdominqu)
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
  1. echo with option -n
  2. cd with only a relative or absolute path ◦ pwd with no options
  3. export with no options
  4. unset with no options
  5. env with no options or arguments
  6. exit with no options
## Usage:
make && ./minishell (должна быть установлена библиотека readline, путь к которой указать в Makefile на 72 строке)
