#include <libreries.hpp>
struct TransactionRequest {
    string from_account;
    string to_account;
    double amount;
    string type; // "deposit", "withdraw", "transfer"

};

struct TransactionResult {
    bool success;
    string message;
    string transaction_id;
};

class TransactionEngine {
public:
    TransactionResult process(const TransactionRequest& req);
};
