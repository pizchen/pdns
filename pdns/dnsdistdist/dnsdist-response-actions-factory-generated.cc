// !! This file has been generated by dnsdist-rules-generator.py, do not edit by hand!!
std::shared_ptr<DNSResponseAction> getAllowResponseAction()
{
  return std::shared_ptr<DNSResponseAction>(new AllowResponseAction());
}
std::shared_ptr<DNSResponseAction> getDelayResponseAction(uint32_t msec)
{
  return std::shared_ptr<DNSResponseAction>(new DelayResponseAction(msec));
}
std::shared_ptr<DNSResponseAction> getDropResponseAction()
{
  return std::shared_ptr<DNSResponseAction>(new DropResponseAction());
}
std::shared_ptr<DNSResponseAction> getLogResponseAction(const std::string& fileName, bool append, bool buffered, bool verboseOnly, bool includeTimestamp)
{
  return std::shared_ptr<DNSResponseAction>(new LogResponseAction(fileName, append, buffered, verboseOnly, includeTimestamp));
}
std::shared_ptr<DNSResponseAction> getLuaResponseAction(dnsdist::actions::LuaResponseActionFunction function)
{
  return std::shared_ptr<DNSResponseAction>(new LuaResponseAction(function));
}
std::shared_ptr<DNSResponseAction> getLuaFFIResponseAction(dnsdist::actions::LuaResponseActionFFIFunction function)
{
  return std::shared_ptr<DNSResponseAction>(new LuaFFIResponseAction(function));
}
std::shared_ptr<DNSResponseAction> getLuaFFIPerThreadResponseAction(const std::string& code)
{
  return std::shared_ptr<DNSResponseAction>(new LuaFFIPerThreadResponseAction(code));
}
std::shared_ptr<DNSResponseAction> getSetExtendedDNSErrorResponseAction(uint16_t infoCode, const std::string& extraText)
{
  return std::shared_ptr<DNSResponseAction>(new SetExtendedDNSErrorResponseAction(infoCode, extraText));
}
std::shared_ptr<DNSResponseAction> getSetReducedTTLResponseAction(uint8_t percentage)
{
  return std::shared_ptr<DNSResponseAction>(new SetReducedTTLResponseAction(percentage));
}
std::shared_ptr<DNSResponseAction> getSetSkipCacheResponseAction()
{
  return std::shared_ptr<DNSResponseAction>(new SetSkipCacheResponseAction());
}
std::shared_ptr<DNSResponseAction> getSetTagResponseAction(const std::string& tag, const std::string& value)
{
  return std::shared_ptr<DNSResponseAction>(new SetTagResponseAction(tag, value));
}
std::shared_ptr<DNSResponseAction> getSNMPTrapResponseAction(const std::string& reason)
{
  return std::shared_ptr<DNSResponseAction>(new SNMPTrapResponseAction(reason));
}
std::shared_ptr<DNSResponseAction> getTCResponseAction()
{
  return std::shared_ptr<DNSResponseAction>(new TCResponseAction());
}
