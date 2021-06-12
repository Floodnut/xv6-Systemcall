#include "types.h"				//gsniper777
#include "stat.h"					//gsniper777
#include "user.h"					//gsniper777
													//gsniper777
int main(int argc, char const *argv[]){	//gsniper777
				int pid = 0;										//gsniper777
				if(argc < 2){										//gsniper777
								printf(2,"Input pid\n");//gsniper777
								exit();									//gsniper777
				}																//gsniper777
				pid = atoi(argv[1]);						//gsniper777
				ps(pid);												//gsniper777
				exit();													//gsniper777
}																				//gsniper777
