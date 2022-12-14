#ifndef _MONTY_H_
#define _MONTY_H_
#define MAX_READ_SIZE 100
#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct parser_s - linked list for parser
 * @data: string
 * @next: points to the next element
 *
 * Description: linked list node structure
 */
typedef struct parser_s
{
	char *data;
	struct parser_s *next;
} parser_t;
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_itoa(int num);
void print_errors(int n, ...);
void mem_error_check(void *data);
int isint(char *str);
int read_byte_codes(char *filename, char **b_code);
parser_t *parser(char *b_code);
void (*get_op_func(char *opcode))(stack_t **stack, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_pint(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_pop(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_swap(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_add(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_nop(stack_t **stack __attribute__((unused)),
			unsigned int line_number __attribute__((unused)));
void op_sub(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_div(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_mul(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_mod(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_pchar(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_pstr(stack_t **stack, unsigned int line_number
			 __attribute__((unused)));
void op_rotl(stack_t **stack, unsigned int line_number
			 __attribute__((unused)));
void op_rotr(stack_t **stack, unsigned int line_number
			 __attribute__((unused)));
void op_stack(stack_t **stack, unsigned int line_number __attribute__((unused)));
void op_queue(stack_t **stack, unsigned int line_number __attribute__((unused)));
void process_code(stack_t **stack, char *b_code, int lineno);
void free_parsed(parser_t *head);
void free_stack(stack_t *head);
int can_push(char *op_code, parser_t *arg, int lineno);
int can_pint(char *op_code, stack_t **stack, int lineno);
int can_pop(char *op_code, stack_t **stack, int lineno);
int can_swap(char *op_code, stack_t **stack, int lineno);
int can_add(char *op_code, stack_t **stack, int lineno);
int can_sub(char *op_code, stack_t **stack, int lineno);
int can_div(char *op_code, stack_t **stack, int lineno);
int can_mul(char *op_code, stack_t **stack, int lineno);
int can_mod(char *op_code, stack_t **stack, int lineno);
int can_pchar(char *op_code, stack_t **stack, int lineno);
int is_comment(char *b_code);
extern int mode;
#endif
