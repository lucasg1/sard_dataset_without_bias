FILE * VAR0;
FILE * VAR1;
FILE * VAR2;
void FUN0();
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    VAR0 = data;
    FUN0();
}
extern FILE * VAR0;
extern FILE * VAR1;
extern FILE * VAR2;
void FUN0()
{
    FILE * data = VAR0;
<START>
    fclose(data);
<END>
}
