/* Now let's write a function to multiply the elements of a list. */
let rec product = xs =>
  switch (xs) {
  | [] => 0
  | _for_you_to_implement => 0
  };

Jest.(
  Expect.(
    describe("List product", () => {
      test("product", () =>
        expect(product([])) |> toBe(1)
      );
      test("product", () =>
        expect(product([55])) |> toBe(55)
      );
      test("product", () =>
        expect(product([5, (-5), 1, (-1)])) |> toBe(25)
      );
      test("product", () =>
        expect(product([5, 5, 1, 1])) |> toBe(25)
      );
    })
  )
);
