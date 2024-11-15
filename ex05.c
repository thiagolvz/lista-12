//Análise linha por linha

//Linha 5:

printf("a * b / c = %.3f\n", (float)a * b / c);


/*Cálculo: a * b / c → 1 * 2 / 3 = 2 / 3 = 0 (divisão inteira).
Após converter para float, temos: 0.000.
Saída: a * b / c = 0.000*/

//Linha 6:

printf("a * b %% c + 1 = %d\n", a * b % c + 1);

/*Cálculo: a * b % c → (1 * 2) % 3 = 2 % 3 = 2.
Adicionando 1: 2 + 1 = 3.
Saída: a * b %% c + 1 = 3*/

//Linha 7:

printf("++a * b - c-- = %d\n", ++a * b - c--);

/*Operação ++a: Pré-incrementa a antes de usá-lo. Agora a = 2.
Operação c--: Pós-decrementa c após usá-lo. Usa-se o valor de c antes de decrementar (3), e depois c vira 2.
Cálculo: ++a * b - c-- → 2 * 2 - 3 = 4 - 3 = 1.
Saída: ++a * b - c-- = 1
Agora, os valores são: a = 2, b = 2, c = 2, d = 4, e = 5.*/

//Linha 8:

printf("7 - - b * ++d = %d\n", 7 - - b * ++d);

/*Operação ++d: Pré-incrementa d antes de usá-lo. Agora d = 5.
Cálculo: 7 - - b * ++d → 7 - - 2 * 5 = 7 + 10 = 17.
Saída: 7 - - b * ++d = 17
Agora, os valores são: a = 2, b = 2, c = 2, d = 5, e = 5.*/

//Linha 9:

printf("a / b / c = %.3f\n", (float)a / b / c);

/*Cálculo: a / b / c → 2 / 2 / 2 = 1 / 2 = 0 (divisão inteira).
Após converter para float, temos: 0.000.
Saída: a / b / c = 0.000*/

//Linha 10:

printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);

/*Operação --d: Pré-decrementa d antes de usá-lo. Agora d = 4.
Cálculo: 7 + c * --d / e → 7 + 2 * 4 / 5 = 7 + 8 / 5 = 7 + 1.6 = 8.600.
Saída: 7 + c * --d / e = 8.600
Agora, os valores são: a = 2, b = 2, c = 2, d = 4, e = 5.*/

//Linha 11:

printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);

/*Operação 2 * a % - b: Primeiro faz-se a multiplicação, 2 * a = 2 * 2 = 4, e depois a operação de módulo com -b. Assim, 4 % -2 = 0 (o resultado do módulo depende do sinal do divisor).
Cálculo: 0 + c + 1 = 0 + 2 + 1 = 3.
Saída: 2 * a %% - b + c + 1 = 3*/

//Linha 12:

printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);

/*Operação ++e: Pré-incrementa e antes de usá-lo. Agora e = 6.
Cálculo: 39.0 / - ++e - + 29 % c → 39.0 / -6 - 29 % 2 = 39.0 / -6 - 1 = -6.500 - 1 = -7.500.
Saída: 39 / - ++e - + 29 %% c = -7.500
Agora, os valores são: a = 2, b = 2, c = 2, d = 4, e = 6.*/

//Linha 13:

printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));

/*Operação ++a: Pré-incrementa a antes de usá-lo. Agora a = 3.
Cálculo: 7 - + ++a % (3 + b) → 7 - + 3 % (3 + 2) = 7 - + 3 % 5 = 7 - 3 = 4.
Saída: 7 - + ++a %% (3+b) = 4
Agora, os valores são: a = 3, b = 2, c = 2, d = 4, e = 6.*/
