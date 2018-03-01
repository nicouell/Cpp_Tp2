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
namespace banque{

Client::Client(int p_noFolio, const std::string& p_nom,
		const std::string& p_prenom, const std::string& p_telephone):m_noFolio(p_noFolio), m_nom(p_nom), m_prenom(p_prenom), m_telephone(p_telephone)
{
}

int Client::reqNoFolio() {
	return m_noFolio;
}

std::string Client::reqNom() const {
	return m_nom;
}

std::string Client::reqPrenom() const {
	return m_prenom;
}

util::Date Client::reqDateOuverture() const {
	return m_dateOuverture;
}

std::string Client::reqTelephone() const {
	return m_telephone;
}

void Client::asgTelephone(std::string& p_telephone) {
	m_telephone = p_telephone;
}

std::string Client::reqClientFormate() {
	ostringstream os;
	os << "Client no de folio: " << reqNoFolio() << endl;
	os << reqPrenom() << " " << reqNom() << endl;
	os << reqTelephone() << endl;
	os << "Date d'ouverture: " << m_dateOuverture.reqDateFormatee() << endl;
	return os.str();
}

bool Client::operator ==(const Client& p_client) const {
	if (m_noFolio == p_client.m_noFolio && m_nom == p_client.m_nom && m_prenom == p_client.m_prenom && m_dateOuverture == p_client.m_dateOuverture && m_telephone == p_client.m_telephone)
		return true;
	else
		return false;
}

bool Client::operator <(const Client& p_client) const{
	return m_noFolio < p_client.m_noFolio;
}
}
