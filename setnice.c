#include "types.h"//gsniper777
#include "stat.h" //gsniper777
#include "user.h" //gsniper777

int main(int argc, char const *argv[]){ //gsniper777
				int pid = 0; 										//gsniper777
				int setNice = 0;								//gsniper777				
				if(argc < 2 ){									//gsniper777
								printf(2, "Input : setnice pid (nice value)\n");//gsniper777
								exit();									//gsniper777
				}																//gsniper777
				pid = atoi(argv[1]);						//gsniper777
				char *nice = strchr(argv[2],45);//gsniper777
				if(nice){												//gsniper777
					printf(2,"invalid nice\n");		//gsniper777
					exit();												//gsniper777
				}																//gsniper777
				else if(argc == 2){							//gsniper777
					setNice = setnice(pid, 20);		//gsniper777
					if(setNice == -1) printf(2, "invalid pid or nice\n"); //gsniper777
				 	exit();												//gsniper777
				}																//gsniper777
				else if(argc == 3 ){						//gsniper777
					setNice = setnice(pid, atoi(argv[2]));//gsniper777
					if(setNice == -1) printf(2,"invalid pid or nice\n");//gsniper777
					exit();												//gsniper777
				}																//gsniper777
}																				//gsniper777
