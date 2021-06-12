#include "types.h"																						//gsniper777
#include "stat.h"																							//gsniper777
#include "user.h"																							//gsniper777
																															//gsniper777
int main(int argc, char const *argv[]){												//gsniper777
								int pid;																			//gsniper777
								int nice;																			//gsniper777
								pid = 0;																			//gsniper777
								nice = 0;																			//gsniper777
								if(argc < 2){																	//gsniper777
									printf(2, "Input : getnice pid\n");					//gsniper777
									exit();																			//gsniper777
								}																							//gsniper777
								pid = atoi(argv[1]);													//gsniper777
								nice = getnice(pid);													//gsniper777
								if (nice == -1){															//gsniper777
									printf(2,"invalid pid\n");									//gsniper777
									exit();																			//gsniper777
								}																							//gsniper777
								printf(1,"pid : %d\tnice : %d\n", pid, nice);	//gsniper777
								exit();																				//gsniper777
}																															//gsniper777
