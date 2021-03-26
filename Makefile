all:
	@make -C ./Colleen 
	@make -C ./Grace 
	@make -C ./Sully 


clean: 
	@make clean -C ./Colleen 
	@make clean -C ./Grace 
	@make clean -C ./Sully 

re: clean all

.PHONY: all clean re