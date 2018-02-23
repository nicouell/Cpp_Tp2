/*
 * Client.h
 *
 *  Created on: 2018-02-21
 *      Author: etudiant
 */

#include <iostream>
#include "Date.h"
#include "validationFormat.h"

#ifndef CLIENT_H_
#define CLIENT_H_


class Client {
public:
	Client();
	Client(int p_noFolio, const std::string& p_nom, const std::string& p_prenom, const std::string& p_telephone);

	int reqNoFolio();
	void asgNoFolio(int p_noFolio);

	std::string reqNom() const;
	void asgNom(std::string& p_nom);

	std::string reqPrenom() const;
	void asgPrenom(std::string& p_prenom);

	util::Date reqDateOuverture() const;
	void asgDateOuverture();

	std::string reqTelephone() const;
	void asgTelephone(std::string& p_telephone);

	std::string reqClientFormate();

	bool operator==(const Client& p_client);
	bool operator<(const Client& p_client);



private:
	int m_noFolio;
	std::string m_nom;
	std::string m_prenom;
	std::string m_telephone;
	util::Date m_dateOuverture;
};

#endif /* CLIENT_H_ */
