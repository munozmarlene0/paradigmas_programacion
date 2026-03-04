
% --- 1. ESTRUCTURAS DE DATOS + HECHOS ---
producto(manzana, 5).           % producto(nombre, precio)
producto(pera, 3).
producto(uva, 4).

% --- 2. LISTAS + RECURSIÓN ---
suma_lista([], 0).              % Caso base: lista vacía
suma_lista([H|T], Total) :-     % [H|T] = cabeza y cola
    suma_lista(T, Sub),         % Recursión
    Total is H + Sub.           % Operador aritmético 'is'

% --- 3. REGLAS + UNIFICACIÓN ---
calcular_total(Lista, Total) :-
    findall(Precio,             
            (member(Prod, Lista), 
             producto(Prod, Precio)), 
            ListaPrecios),
    suma_lista(ListaPrecios, Total).

% --- 4. REGLA MAIN (se ejecuta al cargar) ---
main :-
    write('=== Productos Disponibles ==='), nl,
    producto(Nombre, Precio),
    write(Nombre), write(' = $'), write(Precio), nl,
    fail.                       % Fuerza backtracking para mostrar todos
main :-
    nl, write('=== Total de compra ==='), nl,
    calcular_total([manzana, pera, uva], Total),
    write('Total: $'), write(Total), nl.

% Para ejecutar: ?- main.
