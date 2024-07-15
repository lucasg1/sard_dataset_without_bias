static FILE * FUN0(FILE * data)
{
    data = fopen("BadSource_fopen.txt", "w+");
    return data;
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}
