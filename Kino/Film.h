#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
using namespace std;

class Film
{
	string name;
	string author;
	int kind;
	int year;
	int rating;
	string actor;
	string path;
	int country;
	// добавить поля??????
public:
	Film();

	Film(string n, string a, int k, string p, int y, double r, string ac, int c)
	{
		name = n;
		author = a;
		kind = k;
		path = p;
		year = y;
		rating = r;
		actor = ac;
		country = c;
		// добавить поля ???
	}

	string GetName()
	{
		return name;
	}

	string GetAuthor()
	{
		return author;
	}

	int GetKind()
	{
		return kind;
	}
	
	string GetPath(){
		return path;
	}

	int GetYear(){
		return year;
	}

	int GetRating(){
		return rating;
	}

	string GetActor(){
		return actor;
	}

	int GetCountry(){
		return country;
	}
	// добавить геты????????????????

private:
	
};

class FilmList
{
	vector<Film> List;
public:

	FilmList()
	{
		//Load();
	}

	void Add(Film X){
		List.push_back(X);
	}

	void Delete(int i){
		List.erase(List.begin() + i);
	}

	void Load()//считывание с файла
	{
		ifstream file;
		file.open("D:\\Film.txt", ios_base::in);
		string Name, Author, Kind, Path, Year, Rating, Actor, Country; // добавить поля
		getline(file, Name);
		if (file.is_open()) 
		while (!file.eof()){
			getline(file, Name);
			getline(file, Author);
			getline(file, Kind);
			getline(file, Path);
			getline(file, Year);
			getline(file, Rating);
			getline(file, Actor);
			getline(file, Country);
			Film film(Name, Author, atoi(Kind.c_str()), Path, atoi(Year.c_str()), atof(Rating.c_str()), Actor, atoi(Country.c_str()));
			List.push_back(film);
		}
		file.close();
	}

	void Save(){//запись в файл
		ofstream fof("D:\\Film.txt", ios_base::out | ios_base::trunc);
		fof << "Films:";
		for (int i = 0; i < List.size(); i++)
		{
			fof << "\n" << List[i].GetName();
			fof << "\n" << List[i].GetAuthor();
			fof << "\n" << List[i].GetKind();
			fof << "\n" << List[i].GetPath();
			fof << "\n" << List[i].GetYear();
			fof << "\n" << List[i].GetRating();
			fof << "\n" << List[i].GetActor();
			fof << "\n" << List[i].GetCountry();
		}
	}

	Film GetFilm(int i){
		return List[i];
	}

	int GetSize(){
		return List.size();
	}
};

