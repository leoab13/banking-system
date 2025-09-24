#include <libreries.hpp>
struct Transaction{
    int id;
    double amount;
    string type; // "deposit", "withdraw", "transfer"
    string status; // "pending", "completed", "failed"
    string from_account;
    string to_account;
    string timestamp;
};