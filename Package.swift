// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBteq",
    products: [
        .library(name: "TreeSitterBteq", targets: ["TreeSitterBteq"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBteq",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterBteqTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBteq",
            ],
            path: "bindings/swift/TreeSitterBteqTests"
        )
    ],
    cLanguageStandard: .c11
)
