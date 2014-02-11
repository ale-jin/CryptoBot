#ifndef __SERVER_HH__
#define __SERVER_HH__

#include "Bot.h"

#define TPORT 9090


class BotHandler : virtual public server::BotIf {
public:
    BotHandler();

    void create_bot(const std::string& username, const std::string& name);
    void delete_bot(const std::string& username, const std::string& name);

    void run_bot(const std::string& username, const std::string& name);
    void stop_bot(const std::string& username, const std::string& name);
};

#endif