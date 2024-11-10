import XCTest
import SwiftTreeSitter
import TreeSitterBteq

final class TreeSitterBteqTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bteq())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bteq grammar")
    }
}
