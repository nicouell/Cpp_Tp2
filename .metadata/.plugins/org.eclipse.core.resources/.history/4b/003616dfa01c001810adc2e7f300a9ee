/*
 * Client.cpp
 *
 *  Created on: 2018-02-21
 *      Author: etudiant
 */

#include "Client.h"
#include <iostream>
#include <sstream>

using namespace std;

Client::Client() {
	m_noFolio = 0000;
	m_nom = "nnn";
	m_prenom = "ppp";
	m_telephone = "000 000-0000";
	m_dateOuverture = util::Date();
}

Client::Client(int p_noFolio, const std::string& p_nom,
		const std::string& p_prenom, const std::string& p_telephone) {
	m_noFolio = p_noFolio;
	m_nom = p_nom;
	m_prenom = p_prenom;
	m_telephone = p_telephone;
	m_dateOuverture = util::Date();
}

int Client::reqNoFolio() {
	return m_noFolio;
}

void Client::asgNoFolio(int p_noFolio) {
	m_noFolio = p_noFolio;
}

std::string Client::reqNom() const {
	return m_nom;
}

void Client::asgNom(std::string& p_nom) {
	m_nom = p_nom;
}

std::string Client::reqPrenom() const {
	return m_prenom;
}

void Client::asgPrenom(std::string& p_prenom) {
	m_prenom = p_prenom;
}

util::Date Client::reqDateOuverture() const {
	return m_dateOuverture;
}

void Client::asgDateOuverture(util::Date p_date) {
	m_dateOuverture = p_date;
}

std::string Client::reqTelephone() const {
	return m_telephone;
}

void Client::asgTelephone(std::string& p_telephone) {
	if (util::validerTelephone(p_telephone)){
		m_telephone = p_telephone;
	}
}

std::string Client::reqClientFormate() {
	ostringstream os;
	os << "Client no de folio: " << reqNoFolio() << endl;
	os << reqPrenom() << " " << reqNom() << endl;
	os << reqTelephone() << endl;
	os << "Date d'ouverture: " << reqDateOuverture() << endl;
	return os.str();
}

bool Client::operator ==(const Client& p_client) {
}

bool Client::operator <(const Client& p_client) {
}
