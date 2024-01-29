#include "main.h"

using namespace std;

Certificate::Certificate() {
    cout << "Certificate ID: ";
    getline(cin, cert_id);
    cout << "Certificate name: ";
    getline(cin, cert_name);
    cout << "Certificate rank: ";
    getline(cin, cert_rank);
    cout << "Certificate date: ";
    getline(cin, cert_date);
}