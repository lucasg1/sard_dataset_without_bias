void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
    }
}
