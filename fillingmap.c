#include "fillingmap.h"
#include "game_data.h"
#include <stdlib.h>
#include <time.h>


void fillingmap()
{
    int i, j;
    int line, col;
    int ship_nbcase;

    srand(time(NULL)); // Initialisation de la génération de nombres aléatoires
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            map[i][j] = 0; // Initialisation de la carte à 0 (vide)
        }
    }

    // Positionnement des bateaux de différentes tailles
    for(i = 5; i > 0; i--)
    {
        ship_nbcase = i; // Taille du bateau

        // Positionnement horizontal ou vertical des bateaux
        switch(ship_nbcase)
        {
            // Cas des bateaux de taille 5, 4, 3 (deux bateaux) et 2
            // Les boucles imbriquées positionnent les bateaux en vérifiant la disponibilité des cases adjacentes
            // Si une case est occupée, les coordonnées sont recalculées
            case 5:
                do
                {
                    line = rand() % 10;
                    col = rand() % 10;
                } while(line > 5 && col > 5);

                if(col == 0)
                {
                    col += 1;
                }
                if(line == 0)
                {
                    line += 1;
                }

                if(col <= 5)
                {
                    i = 0;
                    while(i < 5)
                    {
                        if(map[line - 1][col - 1 + i] == 1 && map[line - 1][col + i] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 1][col - 2 + i - j] = 0;
                                i = 0;
                            }
                            do
                            {
                                col = rand() % 10;
                            } while(col > 5 || col == 0);
                        }
                        else
                        {
                            map[line - 1][col - 1 + i] = 1;
                            i += 1;
                        }
                    }
                }
                else
                {
                    if(line > 5)
                    {
                        do
                        {
                            line = rand() % 10;
                        } while(line > 5 || line == 0);
                    }

                    i = 0;
                    while(i < 5)
                    {
                        if(map[line - 1 + i][col - 1] == 1 && map[line + i][col - 1] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 2 + i - j][col - 1] = 0;
                                i = 0;
                            }
                            do
                            {
                                line = rand() % 10;
                            } while(line > 5 || line == 0);
                        }
                        else
                        {
                            map[line - 1 + i][col - 1] = 1;
                            i += 1;
                        }
                    }
                }
                break;

            case 4:
                do
                {
                    line = rand() % 10;
                    col = rand() % 10;
                } while(line > 6 && col > 6);

                if(col == 0)
                {
                    col += 1;
                }
                if(line == 0)
                {
                    line += 1;
                }

                if(col <= 6)
                {
                    i = 0;
                    while(i < 4)
                    {
                        if(map[line - 1][col - 1 + i] == 1 && map[line - 1][col + i] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 1][col - 2 + i - j] = 0;
                                i = 0;
                            }
                            do
                            {
                                col = rand() % 10;
                            } while(col > 6 || col == 0);
                        }
                        else
                        {
                            map[line - 1][col - 1 + i] = 1;
                            i += 1;
                        }
                    }
                }
                else
                {
                    if(line > 6)
                    {
                        do
                        {
                            line = rand() % 10;
                        } while(line > 6 || line == 0);
                    }

                    i = 0;
                    while(i < 4)
                    {
                        if(map[line - 1 + i][col - 1] == 1 && map[line + i][col - 1] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 2 + i - j][col - 1] = 0;
                                i = 0;
                            }
                            do
                            {
                                line = rand() % 10;
                            } while(line > 6 || line == 0);
                        }
                        else
                        {
                            map[line - 1 + i][col - 1] = 1;
                            i += 1;
                        }
                    }
                }
                break;

            case 3:
                do
                {
                    line = rand() % 10;
                    col = rand() % 10;
                } while(line > 7 && col > 7);

                if(col == 0)
                {
                    col += 1;
                }
                if(line == 0)
                {
                    line += 1;
                }

                if(col <= 7)
                {
                    i = 0;
                    while(i < 3)
                    {
                        if(map[line - 1][col - 1 + i] == 1 && map[line - 1][col + i] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 1][col - 2 + i - j] = 0;
                                i = 0;
                            }
                            do
                            {
                                col = rand() % 10;
                            } while(col > 7 || col == 0);
                        }
                        else
                        {
                            map[line - 1][col - 1 + i] = 1;
                            i += 1;
                        }
                    }
                }
                else
                {
                    if(line > 7)
                    {
                        do
                        {
                            line = rand() % 10;
                        } while(line > 7 || line == 0);
                    }

                    i = 0;
                    while(i < 3)
                    {
                        if(map[line - 1 + i][col - 1] == 1 && map[line + i][col - 1] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 2 + i - j][col - 1] = 0;
                                i = 0;
                            }
                            do
                            {
                                line = rand() % 10;
                            } while(line > 7 || line == 0);
                        }
                        else
                        {
                            map[line - 1 + i][col - 1] = 1;
                            i += 1;
                        }
                    }
                }

                // Positionner le deuxième bateau de taille 3
                do
                {
                    line = rand() % 10;
                    col = rand() % 10;
                } while(line > 7 && col > 7);

                if(col == 0)
                {
                    col += 1;
                }
                if(line == 0)
                {
                    line += 1;
                }

                if(col <= 7)
                {
                    i = 0;
                    while(i < 3)
                    {
                        if(map[line - 1][col - 1 + i] == 1 && map[line - 1][col + i] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 1][col - 2 + i - j] = 0;
                                i = 0;
                            }
                            do
                            {
                                col = rand() % 10;
                            } while(col > 7 || col == 0);
                        }
                        else
                        {
                            map[line - 1][col - 1 + i] = 1;
                            i += 1;
                        }
                    }
                }
                else
                {
                    if(line > 7)
                    {
                        do
                        {
                            line = rand() % 10;
                        } while(line > 7 || line == 0);
                    }

                    i = 0;
                    while(i < 3)
                    {
                        if(map[line - 1 + i][col - 1] == 1 && map[line + i][col - 1] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 2 + i - j][col - 1] = 0;
                                i = 0;
                            }
                            do
                            {
                                line = rand() % 10;
                            } while(line > 7 || line == 0);
                        }
                        else
                        {
                            map[line - 1 + i][col - 1] = 1;
                            i += 1;
                        }
                    }
                }
                break;

            case 2:
                do
                {
                    line = rand() % 10;
                    col = rand() % 10;
                } while(line > 8 && col > 8);

                if(col == 0)
                {
                    col += 1;
                }
                if(line == 0)
                {
                    line += 1;
                }

                if(col <= 8)
                {
                    i = 0;
                    while(i < 2)
                    {
                        if(map[line - 1][col - 1 + i] == 1 && map[line - 1][col + i] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 1][col - 2 + i - j] = 0;
                            }
                            i = 0;
                            do
                            {
                                col = rand() % 10;
                            } while(col > 8 || col == 0);
                        }
                        else
                        {
                            map[line - 1][col - 1 + i] = 1;
                            i += 1;
                        }
                    }
                }
                else
                {
                    if(line > 8)
                    {
                        do
                        {
                            line = rand() % 10;
                        } while(line > 8 || line == 0);
                    }

                    i = 0;
                    while(i < 2)
                    {
                        if(map[line - 1 + i][col - 1] == 1 && map[line + i][col - 1] == 1)
                        {
                            for(j = 1; j < i; j++)
                            {
                                map[line - 2 + i - j][col - 1] = 0;
                                i = 0;
                            }
                            do
                            {
                                line = rand() % 10;
                            } while(line > 8 || line == 0);
                        }
                        else
                        {
                            map[line - 1 + i][col - 1] = 1;
                            i += 1;
                        }
                    }
                }
                break;
        }
    }
}
