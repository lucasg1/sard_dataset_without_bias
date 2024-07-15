namespace NAMESPACE0
{
int * VAR1;
int * VAR2;
int * VAR3;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    delete [] data;
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern int * VAR1;
extern int * VAR2;
extern int * VAR3;
void FUN0()
{
    int * data = VAR1;
<START>
    delete [] data;
<END>
}
} 
