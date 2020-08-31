//
// Created by Maikol Guzman on 8/24/20.
//

#include "BankTransferSender.h"

//std::string  BankTransferSender::sendPayment() const {
  //  return "Sending the money by transference";
//}

BankTransferSender::BankTransferSender(Interface *interface) {
    this->interface=interface;
}

BankTransferSender::~BankTransferSender() {
    delete interface;
}

bool BankTransferSender::success(bool reply) {
    if(reply==true){
        interface->PayBankTransfer();
        return true;
    }else return false;
}
