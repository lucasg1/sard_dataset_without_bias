void FUN0(FILE * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(data);
}
