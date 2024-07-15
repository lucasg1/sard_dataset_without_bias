void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
