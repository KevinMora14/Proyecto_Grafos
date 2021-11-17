#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include<fstream>
#include<iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/OpenGL.hpp>

using namespace std;
using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

#define GRAFO_GUARDADO "../Recursos/Grafo.txt"

int main()
{

	sf::RenderWindow mainWindow(sf::VideoMode(1300, 650), "Grafos ", sf::Style::Close);

	mainWindow.setFramerateLimit(60);
	
	mainWindow.setKeyRepeatEnabled(false);

	struct Node
	{
		int TreeID;
		int Xpos;
		int Ypos;
	};


	struct Edge
	{
		sf::Vector2i vertexOne;
		sf::Vector2i vertexTwo;
		double length;
	};

	struct Peso {
		int X;
		int Y;
		int pesito;
	};

	int treeID = 0;
	char letra[27] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','V','W','X','Y','Z'};

	sf::Texture textura;
	sf::Sprite fondo;
	sf::Font fuente;

	sf::Vector2i localPosition;

	sf::Texture gemTexture;
	sf::Texture gemTexture2;
	sf::Texture gemTexture3;
	sf::Texture gemTexture4;
	sf::Texture gemTexture5;
	sf::Texture gemTexture6;
	sf::Texture gemTexture7;
	sf::Texture gemTexture8;
	sf::Texture gemTexture9;
	sf::Texture gemTexture10;
	sf::Texture gemTexture11;
	sf::Texture gemTexture12;
	sf::Texture gemTexture13;
	sf::Texture gemTexture14;
	sf::Texture gemTexture15;
	sf::Texture gemTexture16;
	sf::Texture gemTexture17;
	sf::Texture gemTexture18;
	sf::Texture gemTexture19;
	sf::Texture gemTexture20;
	sf::Texture gemTexture21;
	sf::Texture gemTexture22;
	sf::Texture gemTexture23;
	sf::Texture gemTexture24;
	sf::Texture gemTexture25;
	sf::Texture gemTexture26;
	sf::Texture gemTexture27;
	textura.loadFromFile("../Recursos/mapamundi.png");
	gemTexture.loadFromFile("../Recursos/A.png");
	gemTexture2.loadFromFile("../Recursos/B.png");
	gemTexture3.loadFromFile("../Recursos/C.png");
	gemTexture4.loadFromFile("../Recursos/D.png");
	gemTexture5.loadFromFile("../Recursos/E.png");
	gemTexture6.loadFromFile("../Recursos/F.png");
	gemTexture7.loadFromFile("../Recursos/G.png");
	gemTexture8.loadFromFile("../Recursos/H.png");
	gemTexture9.loadFromFile("../Recursos/I.png");
	gemTexture10.loadFromFile("../Recursos/J.png");
	gemTexture11.loadFromFile("../Recursos/K.png");
	gemTexture12.loadFromFile("../Recursos/L.png");
	gemTexture13.loadFromFile("../Recursos/M.png");
	gemTexture14.loadFromFile("../Recursos/N.png");
	gemTexture15.loadFromFile("../Recursos/Ñ.png");
	gemTexture16.loadFromFile("../Recursos/O.png");
	gemTexture17.loadFromFile("../Recursos/P.png");
	gemTexture18.loadFromFile("../Recursos/Q.png");
	gemTexture19.loadFromFile("../Recursos/R.png");
	gemTexture20.loadFromFile("../Recursos/S.png");
	gemTexture21.loadFromFile("../Recursos/T.png");
	gemTexture22.loadFromFile("../Recursos/U.png");
	gemTexture23.loadFromFile("../Recursos/V.png");
	gemTexture24.loadFromFile("../Recursos/W.png");
	gemTexture25.loadFromFile("../Recursos/X.png");
	gemTexture26.loadFromFile("../Recursos/Y.png");
	gemTexture27.loadFromFile("../Recursos/Z.png");

	sf::Sprite gemSprite;
	sf::Sprite gemSprite2;
	sf::Sprite gemSprite3;
	sf::Sprite gemSprite4;
	sf::Sprite gemSprite5;
	sf::Sprite gemSprite6;
	sf::Sprite gemSprite7;
	sf::Sprite gemSprite8;
	sf::Sprite gemSprite9;
	sf::Sprite gemSprite10;
	sf::Sprite gemSprite11;
	sf::Sprite gemSprite12;
	sf::Sprite gemSprite13;
	sf::Sprite gemSprite14;
	sf::Sprite gemSprite15;
	sf::Sprite gemSprite16;
	sf::Sprite gemSprite17;
	sf::Sprite gemSprite18;
	sf::Sprite gemSprite19;
	sf::Sprite gemSprite20;
	sf::Sprite gemSprite21;
	sf::Sprite gemSprite22;
	sf::Sprite gemSprite23;
	sf::Sprite gemSprite24;
	sf::Sprite gemSprite25;
	sf::Sprite gemSprite26;
	sf::Sprite gemSprite27;
	fondo.setTexture(textura);
	gemSprite.setTexture(gemTexture);
	gemSprite.setOrigin(14, 14);
	gemSprite.setScale(2, 2);
	//-----------------------
	gemSprite2.setTexture(gemTexture2);
	gemSprite2.setOrigin(6, 6);
	gemSprite2.setScale(2, 2);
	//-----------------------
	gemSprite3.setTexture(gemTexture3);
	gemSprite3.setOrigin(6, 6);
	gemSprite3.setScale(2, 2);
	//-----------------------
	 gemSprite4.setTexture(gemTexture4);
	 gemSprite4.setOrigin(6,6);
	 gemSprite4.setScale(2,2);
	//-----------------------
	 gemSprite5.setTexture(gemTexture5);
	 gemSprite5.setOrigin(6, 6);
	 gemSprite5.setScale(2, 2);
	//-----------------------
	 gemSprite6.setTexture(gemTexture6);
	 gemSprite6.setOrigin(6, 6);
     gemSprite6.setScale(2, 2);
	//-----------------------
	gemSprite7.setTexture(gemTexture7);
	gemSprite7.setOrigin(6, 6);
	gemSprite7.setScale(2, 2);
	//-----------------------
	gemSprite8.setTexture(gemTexture8);
	gemSprite8.setOrigin(6, 6);
	gemSprite8.setScale(2, 2);
	//-----------------------
	gemSprite9.setTexture(gemTexture9);
	gemSprite9.setOrigin(6, 6);
	gemSprite9.setScale(2, 2);
	//-----------------------
	gemSprite10.setTexture(gemTexture10);
	gemSprite10.setOrigin(6, 6);
	gemSprite10.setScale(2, 2);
	//-----------------------
	gemSprite11.setTexture(gemTexture11);
	gemSprite11.setOrigin(6, 6);
	gemSprite11.setScale(2, 2);
	//-----------------------
	gemSprite12.setTexture(gemTexture12);
	gemSprite12.setOrigin(6, 6);
	gemSprite12.setScale(2, 2);
	//-----------------------
	gemSprite13.setTexture(gemTexture13);
	gemSprite13.setOrigin(6, 6);
	gemSprite13.setScale(2, 2);
	//-----------------------
	gemSprite14.setTexture(gemTexture14);
	gemSprite14.setOrigin(6, 6);
	gemSprite14.setScale(2, 2);
	//-----------------------
	gemSprite15.setTexture(gemTexture15);
	gemSprite15.setOrigin(6, 6);
	gemSprite15.setScale(2, 2);
	//-----------------------
	gemSprite16.setTexture(gemTexture16);
	gemSprite16.setOrigin(6, 6);
	gemSprite16.setScale(2, 2);
	//-----------------------
	gemSprite17.setTexture(gemTexture17);
	gemSprite17.setOrigin(6, 6);
	gemSprite17.setScale(2, 2);
	//-----------------------
	gemSprite18.setTexture(gemTexture18);
	gemSprite18.setOrigin(6, 6);
	gemSprite18.setScale(2, 2);
	//-----------------------
	gemSprite19.setTexture(gemTexture19);
	gemSprite19.setOrigin(6, 6);
	gemSprite19.setScale(2,2);
	//-----------------------
	gemSprite20.setTexture(gemTexture20);
	gemSprite20.setOrigin(6, 6);
	gemSprite20.setScale(2, 2);
	//-----------------------
	gemSprite21.setTexture(gemTexture21);
	gemSprite21.setOrigin(6, 6);
	gemSprite21.setScale(2, 2);
	//-----------------------
	gemSprite22.setTexture(gemTexture22);
	gemSprite22.setOrigin(6, 6);
	gemSprite22.setScale(2, 2);
	//-----------------------
	gemSprite23.setTexture(gemTexture23);
	gemSprite23.setOrigin(6, 6);
	gemSprite23.setScale(2, 2);
	//-----------------------
	gemSprite24.setTexture(gemTexture24);
	gemSprite24.setOrigin(6, 6);
	gemSprite24.setScale(2, 2);
	//-----------------------
	gemSprite25.setTexture(gemTexture25);
	gemSprite25.setOrigin(6, 6);
	gemSprite25.setScale(2, 2);
	//-----------------------
	gemSprite26.setTexture(gemTexture26);
	gemSprite26.setOrigin(6, 6);
	gemSprite26.setScale(2, 2);
	//-----------------------
	gemSprite27.setTexture(gemTexture27);
	gemSprite27.setOrigin(6, 6);
	gemSprite27.setScale(2, 2);
	
	//Texto//
	fuente.loadFromFile("../Recursos/OpenSans-Bold.ttf");
	sf::Text menu("~~Menú de opciones~~", fuente, 12);
	menu.setPosition(80, 490);
	menu.setFillColor(sf::Color::Black);

	sf::Text limpiar("Presione L para limpiar la pantalla", fuente, 12);
	limpiar.setPosition(20, 510);
	limpiar.setFillColor(sf::Color::Black);

	sf::Text Dijkstra("Presione D para aplicar el algoritmo dijkstra", fuente, 12);
	Dijkstra.setPosition(20, 530);
	Dijkstra.setFillColor(sf::Color::Black);

	sf::Text Warshall("Presione W para aplicar el algoritmo warshall", fuente, 12);
	Warshall.setPosition(20, 550);
	Warshall.setFillColor(sf::Color::Black);

	sf::Text Prim("Presione P para aplicar el algoritmo prim", fuente, 12);
	Prim.setPosition(20, 570);
	Prim.setFillColor(sf::Color::Black);

	sf::Text Kruskal("Presione K para aplicar el algoritmo kruskal", fuente, 12);
	Kruskal.setPosition(20, 590);
	Kruskal.setFillColor(sf::Color::Black);

	sf::Text Guardar("Presione G para aplicar el algoritmo guardar", fuente, 12);
	Guardar.setPosition(20, 610);
	Guardar.setFillColor(sf::Color::Black);

	sf::Text Cargar("Presione C para aplicar el algoritmo cargar un grafo", fuente, 12);
	Cargar.setPosition(20, 630);
	Cargar.setFillColor(sf::Color::Black);

	

	vector<sf::Vector2i> pointVector;
	vector<sf::VertexArray> lineVector;
	vector<sf::VertexArray> linkedVector;

	vector<sf::Vector2i> activeTemp;


	vector<Node> nodeVect;
	vector<Edge> edgeVect;
	vector<Edge> orden;
	vector<Peso> PesoArista;
	Edge ordenfin;
	Edge ordenInicio;



	bool calcStarted = false;
	bool calcDijkstra = false;
	bool calcFloyd = false;

	int delayAmount = 0;
	int solutionIndex = 0;
	int peso = 0, lugarInicio = 0,lugarfin=0;
	char inicio;
	char fin;

	while (mainWindow.isOpen())
	{
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mainWindow.close();

			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (!calcStarted)
				{
					if (event.key.code == sf::Mouse::Left)
					{
						bool validPos = true;

						for (int i = 0; i < pointVector.size(); i++)
						{
							if (sqrt(pow((localPosition.x - pointVector[i].x), 2) + pow((localPosition.y - pointVector[i].y), 2)) < 70)
							{
								validPos = false;
								cout << "posicion en falso" << endl;
							}
						}

						if (validPos)
						{
													
							pointVector.push_back(localPosition);

						
							Node newNode;
							newNode.TreeID = treeID;
							treeID++;

							newNode.Xpos = localPosition.x;
							newNode.Ypos = localPosition.y;

							nodeVect.push_back(newNode);

							cout << "- Nodo creado -" << endl;
							cout << "X - Posicion en X: " << newNode.Xpos << endl;
							cout << "Y - Posicion en Y: " << newNode.Ypos << endl;
							cout << "Id del arbol: " << treeID << endl;
							cout << endl << endl;
							
						}

					}



					if (event.key.code == sf::Mouse::Right)
					{
						

						for (int i = 0; i < pointVector.size(); i++)
						{
							

							if (sqrt(pow((localPosition.x - pointVector[i].x), 2) + pow((localPosition.y - pointVector[i].y), 2)) < 70)
							{
								
								if (activeTemp.size() < 2)
								{

									if (activeTemp.size() == 1)
									{
										if (activeTemp[0] != pointVector[i])
										{
											activeTemp.push_back(pointVector[i]);


											sf::VertexArray tempLine(sf::Lines, 2);

											tempLine[0].position = sf::Vector2f(activeTemp[1].x, activeTemp[1].y);
											tempLine[1].position = sf::Vector2f(activeTemp[0].x, activeTemp[0].y);

											tempLine[0].color = sf::Color::Black;
											tempLine[1].color = sf::Color::Black;

										

											lineVector.push_back(tempLine);
											
											
											activeTemp.insert(activeTemp.end(),pointVector.begin(),pointVector.end());
											

											bool valid = true;
											
											for (int i = 0; i < edgeVect.size(); i++)
											{
												
												if ((edgeVect[i].vertexOne.x == activeTemp[1].x) && (edgeVect[i].vertexOne.y == activeTemp[1].y))
												{
													if (((edgeVect[i].vertexTwo.x == activeTemp[0].x) && (edgeVect[i].vertexTwo.y == activeTemp[0].y)))
													{
														valid = false;
													}
												}

												if ((edgeVect[i].vertexTwo.x == activeTemp[1].x) && (edgeVect[i].vertexTwo.y == activeTemp[1].y))
												{
													if (((edgeVect[i].vertexOne.x == activeTemp[0].x) && (edgeVect[i].vertexOne.y == activeTemp[0].y)))
													{
														valid = false;
													}
												}
											}

						

											if (valid)
											{
												cout << "De que peso desea su arista " << endl;
												cin >> peso;

												Peso PesoA;
												PesoA.pesito = peso;
												PesoA.X = (activeTemp[0].x + activeTemp[1].x) / 2;
												PesoA.Y = (activeTemp[1].y + activeTemp[0].y) / 2;
												PesoArista.push_back(PesoA);

												Edge newEdge;

												newEdge.length = peso;
												newEdge.vertexOne.x = activeTemp[1].x;
												newEdge.vertexOne.y = activeTemp[1].y;

												newEdge.vertexTwo.x = activeTemp[0].x;
												newEdge.vertexTwo.y = activeTemp[0].y;

												edgeVect.push_back(newEdge);

										
												cout << "- Arista Creada --" << endl;
												cout << "Vertice - 1: " << activeTemp[1].x << " " << activeTemp[1].y << endl;
												cout << "Vertice - 2: " << activeTemp[0].x << " " << activeTemp[0].y << endl;
												cout << "Peso: " << newEdge.length << endl << endl;
												activeTemp.clear();

											}

										}
									}

									else
									{
										activeTemp.push_back(pointVector[i]);
									}

								}
							}
						}
					}
				}
			}

			if (event.type == sf::Event::KeyReleased)
			{
				//Algoritmo de Kruskall
				if (event.key.code == sf::Keyboard::K)
				{
					delayAmount = 500;

					if (!calcStarted)
					{
						for (int i = 0; i < edgeVect.size(); i++)
						{
							for (int j = i; j < edgeVect.size(); j++)
							{
								if (edgeVect[i].length > edgeVect[j].length)
								{
									swap(edgeVect[i], edgeVect[j]);
								}
							}
						}
					}

					
					calcStarted = true;
				}

				//Algoritmo de prim
				else if (event.key.code == sf::Keyboard::P) {
					delayAmount = 500;

				
					if (!calcStarted)
					{
						for (int i = 0; i < edgeVect.size(); i++)
						{
							for (int j = i; j < edgeVect.size(); j++)
							{
								if (edgeVect[i].length > edgeVect[j].length)
								{
									swap(edgeVect[i], edgeVect[j]);
								}
							}
						}
					}

			
					calcStarted = true;
				}
				//Algoritmo de Warshall
				else if (event.key.code == sf::Keyboard::W) {
					delayAmount = 500;
					cout << "Dijite el nodo Inicial " << endl;
					cin >> inicio;
					cout << "Dijite el nodo Final " << endl;
					cin >> fin;
					for (int x = 0; x < 27; x++) {
						if (letra[x] == inicio) {
							lugarInicio = x;
						}
						if (letra[x] == fin) {
							lugarfin = x;
						}
					}
					orden.push_back(edgeVect[lugarInicio]);
					ordenInicio = edgeVect[lugarInicio];

					if (!calcFloyd)
					{
						for (int i = 0; i < edgeVect.size(); i++)
						{
							for (int j = i; j < edgeVect.size(); j++)
							{
								if (edgeVect[i].length > edgeVect[j].length)
								{
									swap(edgeVect[i], edgeVect[j]);

								}

							}
						}
					}
					for (int j = 0; j < edgeVect.size(); j++)
					{
						if (ordenInicio.length != edgeVect[j].length)
						{

							orden.push_back(edgeVect[j]);


						}
					}

					for (int i = 0; i < orden.size(); i++)
					{
						cout << "Tamaño Orden " << orden[i].length << endl;
					}

					calcFloyd = true;
				}
				//Algoritmo de Dijkstra
				else if (event.key.code == sf::Keyboard::D) {
					delayAmount = 500;
					cout << "Dijite el nodo Inicial " << endl;
					cin >> inicio;
					cout << "Dijite el nodo Final " << endl;
					cin >> fin;
					for (int x = 0; x < 27; x++) {
						if (letra[x] == inicio) {
							lugarInicio = x;
						}
						if (letra[x] == fin) {
							lugarfin = x;
						}
					}
					orden.push_back(edgeVect[lugarInicio]);
					ordenInicio = edgeVect[lugarInicio];

					if (!calcDijkstra)
					{
						for (int i = 0; i < edgeVect.size(); i++)
						{
							for (int j = i; j < edgeVect.size(); j++)
							{
								if (edgeVect[i].length > edgeVect[j].length)
								{
									swap(edgeVect[i], edgeVect[j]);
									
								}
								
							}
						}
					}
					for (int j = 0; j < edgeVect.size(); j++)
					{
						if (ordenInicio.length != edgeVect[j].length)
						{
							
								orden.push_back(edgeVect[j]);
					
							
						}
					}
				
					for (int i = 0; i < orden.size(); i++)
					{
						cout << "Tamaño Orden " << orden[i].length << endl;
					}
			
					calcDijkstra = true;
					
				}
				//Guardar
				else if (event.key.code == sf::Keyboard::G) {
				ofstream Archivo;
				Archivo.open(GRAFO_GUARDADO, ios::app);
				if (Archivo.is_open()) {
					for (unsigned int j = 0; j < nodeVect.size(); j++) {
						Archivo << nodeVect[j].TreeID << "-" << nodeVect[j].Xpos << "-" << nodeVect[j].Ypos <<"-" << edgeVect[j].vertexOne.x << "-" << edgeVect[j].vertexOne.y << "-" << edgeVect[j].vertexTwo.x << "-" << edgeVect[j].vertexTwo.y << "-" << edgeVect[j].length << "+";
					}
					cout << "Grafo guardado correctamente" << endl;
					Archivo.close();
				}
				}
				//Cargar
				else if (event.key.code == sf::Keyboard::C) {
				ifstream Archivo;
				string Linea, concatenacion;
				int CantCaracteres;
				int Cont = 0;
				int Contguion = 0;
				int Cambio = 0;
				concatenacion = getchar();
				Archivo.open(GRAFO_GUARDADO);
				if (Archivo.is_open()) {
					cout << "Grafo abierto correctamente" << endl;
					while (getline(Archivo, Linea)) {
						CantCaracteres = Linea.length();
						for (int i = 0; i <= CantCaracteres; i++) {
							Node newNode;
							if (Linea[i] == '-') {
								Contguion += 1;

							} if (Contguion == 0) {
								cout << "Linea id: " << Linea[i] << endl;
								newNode.TreeID = Linea[i];
								cout << "Id del arbol: " << treeID << endl;
							}
							if (Contguion == 1) {

								concatenacion += Linea[i];
								Cambio = stoi(concatenacion, nullptr, 10);

								newNode.Xpos = Cambio;
								cout << "Linea x: " << concatenacion << endl;
							}
							if (Contguion == 2) {
								cout << "Linea y: " << Linea[i] << endl;
								newNode.Ypos = Linea[i];

							}
							if (Linea[i] == '+') {
								Contguion = 0;
								nodeVect.push_back(newNode);
								localPosition.x = newNode.Xpos;
								localPosition.y = newNode.Ypos;
								pointVector.push_back(localPosition);
								cout << "- Nodo creado -" << endl;
								cout << "X - Posicion en X: " << newNode.Xpos << endl;
								cout << "Y - Posicion en Y: " << newNode.Ypos << endl;
								cout << "Id del arbol: " << treeID << endl;
								cout << endl << endl;
							}
						}
						Cont++;
					}
					cout << "Grafo cargado correctamente" << endl;
					Archivo.close();


				}
				}
				else if (event.key.code == sf::Keyboard::L) {
				nodeVect.clear();
				edgeVect.clear();
				mainWindow.clear();
				pointVector.clear();
				lineVector.clear();
				linkedVector.clear();

				activeTemp.clear();

				nodeVect.clear();
				edgeVect.clear();
				PesoArista.clear();
				orden.clear();

				delayAmount = 0;
				solutionIndex = 0;
				peso = 0;
				lugarInicio = 0;
				lugarfin = 0;
				calcStarted = false;
				calcDijkstra = false;
				calcFloyd = false;
				inicio = '\0';
				fin = '\0';
				}
			}

		}

		localPosition = sf::Mouse::getPosition(mainWindow);
		//------------------------------------------------------------------------------------------------------
		if (calcDijkstra) {
			for (int i = 0; i < nodeVect.size(); i++)
			{
				if (solutionIndex < orden.size()) {
					if (orden[solutionIndex].vertexOne.x == nodeVect[i].Xpos)
					{
						if (orden[solutionIndex].vertexOne.y == nodeVect[i].Ypos)
						{
							for (int j = 0; j < nodeVect.size(); j++)
							{
								if (orden[solutionIndex].vertexTwo.x == nodeVect[j].Xpos)
								{
									if (orden[solutionIndex].vertexTwo.y == nodeVect[j].Ypos)
									{
										if (nodeVect[j].TreeID != nodeVect[i].TreeID)
										{
										
											for (int y = 0; y < nodeVect.size(); y++)
											{
												if ((nodeVect[y].TreeID == nodeVect[j].TreeID) && j != y)
												{

													nodeVect[y].TreeID = nodeVect[i].TreeID;
												}
											}
											nodeVect[j].TreeID = nodeVect[i].TreeID;

										
											sf::VertexArray tempLine(sf::Lines, 2);

											tempLine[0].position = sf::Vector2f(orden[solutionIndex].vertexOne.x, orden[solutionIndex].vertexOne.y);
											tempLine[1].position = sf::Vector2f(orden[solutionIndex].vertexTwo.x, orden[solutionIndex].vertexTwo.y);

											tempLine[0].color = sf::Color::Yellow;
											tempLine[1].color = sf::Color::Red;

											linkedVector.push_back(tempLine);

										}
									}
								}
							}
						}
					}
					
				}
				else {
					break;
				}
			}

			solutionIndex++;
		}
		//------------------------------------------------------------------------------------------------------
		if (calcFloyd) {
			for (int i = 0; i < nodeVect.size(); i++)
			{
				if (solutionIndex < orden.size()) {
					if (orden[solutionIndex].vertexOne.x == nodeVect[i].Xpos)
					{
						if (orden[solutionIndex].vertexOne.y == nodeVect[i].Ypos)
						{
							for (int j = 0; j < nodeVect.size(); j++)
							{
								if (orden[solutionIndex].vertexTwo.x == nodeVect[j].Xpos)
								{
									if (orden[solutionIndex].vertexTwo.y == nodeVect[j].Ypos)
									{
										if (nodeVect[j].TreeID != nodeVect[i].TreeID)
										{

											for (int y = 0; y < nodeVect.size(); y++)
											{
												if ((nodeVect[y].TreeID == nodeVect[j].TreeID) && j != y)
												{

													nodeVect[y].TreeID = nodeVect[i].TreeID;
												}
											}
											nodeVect[j].TreeID = nodeVect[i].TreeID;


											sf::VertexArray tempLine(sf::Lines, 2);

											tempLine[0].position = sf::Vector2f(orden[solutionIndex].vertexOne.x, orden[solutionIndex].vertexOne.y);
											tempLine[1].position = sf::Vector2f(orden[solutionIndex].vertexTwo.x, orden[solutionIndex].vertexTwo.y);

											tempLine[0].color = sf::Color::Yellow;
											tempLine[1].color = sf::Color::Red;

											linkedVector.push_back(tempLine);

										}
									}
								}
							}
						}
					}

				}
				else {
					break;
				}
			}

			solutionIndex++;
		}
		//------------------------------------------------------------------------------------------------------
		if (calcStarted)
		{
			
			for (int i = 0; i < nodeVect.size(); i++)
			{
				if (solutionIndex < edgeVect.size()) {
				
					if (edgeVect[solutionIndex].vertexOne.x == nodeVect[i].Xpos)
					{
						
						if (edgeVect[solutionIndex].vertexOne.y == nodeVect[i].Ypos)
						{
							for (int j = 0; j < nodeVect.size(); j++)
							{
								if (edgeVect[solutionIndex].vertexTwo.x == nodeVect[j].Xpos)
								{
									if (edgeVect[solutionIndex].vertexTwo.y == nodeVect[j].Ypos)
									{
										if (nodeVect[j].TreeID != nodeVect[i].TreeID)
										{
											//-- Convert all nodes to the new treeID preventing loop creation in the next iteration --//
											for (int y = 0; y < nodeVect.size(); y++)
											{
												if ((nodeVect[y].TreeID == nodeVect[j].TreeID) && j != y)
												{
													
													nodeVect[y].TreeID = nodeVect[i].TreeID;
												}
											}


											
											nodeVect[j].TreeID = nodeVect[i].TreeID;
											
											//-- Add a new overlay to the linkedVector --//
											sf::VertexArray tempLine(sf::Lines, 2);

											tempLine[0].position = sf::Vector2f(edgeVect[solutionIndex].vertexOne.x, edgeVect[solutionIndex].vertexOne.y);
											tempLine[1].position = sf::Vector2f(edgeVect[solutionIndex].vertexTwo.x, edgeVect[solutionIndex].vertexTwo.y);
											
											tempLine[0].color = sf::Color::Yellow;
											tempLine[1].color = sf::Color::Red;

											linkedVector.push_back(tempLine);
											
										}
									}
								}
							}
						}
					}
				}
				else {
					break;
				}
			}

			solutionIndex++;
		}
		//------------------------------------------------------------------------------------------------------

		Sleep(delayAmount);
		
		mainWindow.clear(sf::Color::Black);

		mainWindow.draw(fondo);
		mainWindow.draw(menu);
		mainWindow.draw(limpiar);
		mainWindow.draw(Dijkstra);
		mainWindow.draw(Warshall);
		mainWindow.draw(Prim);
		mainWindow.draw(Kruskal);
		mainWindow.draw(Guardar);
		mainWindow.draw(Cargar);


		for (int i = 0; i < lineVector.size(); i++)
		{
			mainWindow.draw(lineVector[i]);
			string mensajePeso(std::to_string(PesoArista[i].pesito));
			sf::Text tamanio(mensajePeso, fuente, 12);
			tamanio.setPosition(PesoArista[i].X, PesoArista[i].Y);
			tamanio.setFillColor(sf::Color::Black);
			mainWindow.draw(tamanio);
		}

		for (int i = 0; i < linkedVector.size(); i++)
		{
			//cout << "Dibujo la linea amarilla" << endl;
			mainWindow.draw(linkedVector[i]);
		}

		for (int i = 0; i < pointVector.size(); i++)
		{
			if (i == 0) {
				gemSprite.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite);
			}
			else if (i == 1) {
				gemSprite2.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite2);
			}
			else if (i == 2) {
				gemSprite3.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite3);
			}
			else if (i == 3) {
				gemSprite4.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite4);
			}
			else if (i == 4) {
				gemSprite5.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite5);
			}
			else if (i == 5) {
				gemSprite6.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite6);
			}
			else if (i == 6) {
				gemSprite7.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite7);
			}
			else if (i == 7) {
				gemSprite8.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite8);
			}
			else if (i == 8) {
				gemSprite9.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite9);
			}
			else if (i == 9) {
				gemSprite10.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite10);
			}
			else if (i == 10) {
				gemSprite11.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite11);
			}
			else if (i == 11) {
				gemSprite12.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite12);
			}
			if (i == 12) {
				gemSprite13.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite13);
			}
			else if (i == 13) {
				gemSprite14.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite14);
			}
			else if (i == 14) {
				gemSprite15.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite15);
			}
			else if (i == 15) {
				gemSprite16.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite16);
			}
			else if (i == 16) {
				gemSprite17.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite17);
			}
			else if (i == 17) {
				gemSprite18.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite18);
			}
			else if (i == 18) {
				gemSprite19.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite19);
			}
			else if (i == 19) {
				gemSprite20.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite20);
			}
			else if (i == 20) {
				gemSprite21.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite21);
			}
			else if (i == 21) {
				gemSprite22.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite22);
			}
			else if (i == 22) {
				gemSprite23.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite23);
			}
			else if (i == 23) {
				gemSprite24.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite24);
			}
			else if (i == 24) {
				gemSprite25.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite25);
			}
			else if (i == 25) {
				gemSprite26.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite26);
			}
			else if (i == 26) {
				gemSprite27.setPosition(pointVector[i].x, pointVector[i].y);
				mainWindow.draw(gemSprite27);
			}
		}	


		mainWindow.display();
	}

	return 0;
}
