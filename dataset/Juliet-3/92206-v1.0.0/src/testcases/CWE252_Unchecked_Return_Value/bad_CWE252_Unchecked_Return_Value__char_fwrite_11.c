void FUN0()
{
    if(globalReturnsTrue())
    {
<START>
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
    }
}
