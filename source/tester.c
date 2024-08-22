#include "../include/pushswap.h"

void tester(t_node	**stack_a, t_node	**stack_b)
{
	printf("*** TESTE 0 ***\n");
	pa(stack_a, stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 1 ***\n");
	pb(stack_a, stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 2 ***\n");
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 3 ***\n");
	pa(stack_a, stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 4 ***\n");
	rb(stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 5 ***\n");
	rrb(stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 6 ***\n");
	ra(stack_a);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);


	printf("----------------------------------------------");
	printf("\n*** TESTE 6 ***\n");
	rra(stack_a);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 7 ***\n");
	sa(*stack_a);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 8 ***\n");
	pb(stack_a, stack_b);
	sb(*stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);

	printf("----------------------------------------------");
	printf("\n*** TESTE 9 ***\n");
	ss(*stack_a, *stack_b);
	printf("stack a :\n");
	print_stack(*stack_a);
	printf("stack b :\n");
	print_stack(*stack_b);
}
