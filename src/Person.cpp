//
// Created by Maikol Guzman on 8/20/20.
//

#include "Person.h"

Person::Person() {}

Person::Person(const std::string &firstName, const std::string &lastName, int documentId) : firstName(firstName),
                                                                                            lastName(lastName),
                                                                                            documentId(documentId) {}

const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}

std::string Person::toString() const {
    return getFirstName() + " " + getLastName() + "\nDoc Id: " + std::to_string(getDocumentId());
}

//std::string Person::processPaymentBankTransfer() {
    //BankTransferSender bankTransferSender;
    //return bankTransferSender.sendPayment();
//}

//std::string Person::processPaymentCash() {
    //CashSender cashSender;
    //return cashSender.sendPayment();
//}

//std::string Person::processPaymentCheck() {
    //CheckSender checkSender;
    //return checkSender.sendPayment();
//}

std::string Person::PayCheckSender() {
    return "Sending the check with the money";
}

std::string Person::PayCashSender() {
    return "Give the money in the hands";
}

std::string Person::PayBankTransfer() {
    return "Sending the money by transference";
}
