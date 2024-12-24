// !! This file has been generated by dnsdist-rules-generator.py, do not edit by hand!!
std::shared_ptr<DNSResponseAction> getAllowResponseAction();
std::shared_ptr<DNSResponseAction> getDelayResponseAction(uint32_t msec);
std::shared_ptr<DNSResponseAction> getDropResponseAction();
std::shared_ptr<DNSResponseAction> getLogResponseAction(const std::string& fileName, bool append, bool buffered, bool verboseOnly, bool includeTimestamp);
std::shared_ptr<DNSResponseAction> getLuaResponseAction(dnsdist::actions::LuaResponseActionFunction function);
std::shared_ptr<DNSResponseAction> getLuaFFIResponseAction(dnsdist::actions::LuaResponseActionFFIFunction function);
std::shared_ptr<DNSResponseAction> getLuaFFIPerThreadResponseAction(const std::string& code);
std::shared_ptr<DNSResponseAction> getSetExtendedDNSErrorResponseAction(uint16_t infoCode, const std::string& extraText);
std::shared_ptr<DNSResponseAction> getSetReducedTTLResponseAction(uint8_t percentage);
std::shared_ptr<DNSResponseAction> getSetSkipCacheResponseAction();
std::shared_ptr<DNSResponseAction> getSetTagResponseAction(const std::string& tag, const std::string& value);
std::shared_ptr<DNSResponseAction> getSNMPTrapResponseAction(const std::string& reason);
std::shared_ptr<DNSResponseAction> getTCResponseAction();
