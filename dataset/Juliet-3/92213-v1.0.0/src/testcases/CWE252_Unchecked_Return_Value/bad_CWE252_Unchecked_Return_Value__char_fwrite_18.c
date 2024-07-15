void FUN0()
{
    goto sink;
sink:
<START>
    fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
}
