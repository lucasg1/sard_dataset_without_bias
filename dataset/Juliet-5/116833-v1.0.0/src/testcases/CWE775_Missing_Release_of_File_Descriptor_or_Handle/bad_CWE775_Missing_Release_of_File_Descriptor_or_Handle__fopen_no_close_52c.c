void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN1(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN1(data);
}
void FUN0(FILE * data)
{
<START>
<END>
    ; 
}
