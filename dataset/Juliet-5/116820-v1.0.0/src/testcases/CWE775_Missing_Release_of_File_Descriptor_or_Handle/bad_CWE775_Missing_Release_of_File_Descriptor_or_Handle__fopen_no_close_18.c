void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    goto sink;
sink:
<START>
<END>
    ; 
}
