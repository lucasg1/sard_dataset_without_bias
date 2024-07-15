void FUN0()
{
    goto sink;
sink:
    if (RpcImpersonateClient(0) != RPC_S_OK)
    {
        exit(1);
    }
}
